inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 8 }));
  set_short( "Hallway - x23y48z8" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y48z8.c",
  "east" : DIR+"/rooms/x24y48z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
