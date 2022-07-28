inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 6 }));
  set_short( "Hallway - x29y44z6" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y44z6.c",
  "north" : DIR+"/rooms/x29y45z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
