# include <stdio.h>
struct why {int which; struct why *when;};
void howdoesitmatter (struct why *how) {
  if (how) howdoesitmatter(how->when);
  else printf("NULL");
  if (how) printf(" <- %d", how->which);
}

int main() {
  struct why n1 = {1, 0}, n2 = {2, &n1}, n3 = {3, &n2}, n4 = {4, &n3}, *plist = &n4;
  howdoesitmatter(plist);
}
