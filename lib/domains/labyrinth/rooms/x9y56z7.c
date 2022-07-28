inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 7 }));
  set_short( "Passage - x9y56z7" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y56z7.c",
  "east" : DIR+"/rooms/x10y56z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
