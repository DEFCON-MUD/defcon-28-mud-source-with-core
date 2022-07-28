inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 1 }));
  set_short( "Hallway - x35y62z1" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y62z1.c",
  "east" : DIR+"/rooms/x36y62z1.c",
  "south" : DIR+"/rooms/x35y61z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
