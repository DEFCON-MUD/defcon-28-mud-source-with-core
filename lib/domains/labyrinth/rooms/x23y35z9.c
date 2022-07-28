inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 35, 9 }));
  set_short( "Hallway - x23y35z9" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y36z9.c",
  "south" : DIR+"/rooms/x23y34z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
