inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 5, 8 }));
  set_short( "Hallway - x51y5z8" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y6z8.c",
  "south" : DIR+"/rooms/x51y4z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
