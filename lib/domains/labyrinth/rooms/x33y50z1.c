inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 1 }));
  set_short( "Hallway - x33y50z1" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y50z1.c",
  "east" : DIR+"/rooms/x34y50z1.c",
  "south" : DIR+"/rooms/x33y49z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
