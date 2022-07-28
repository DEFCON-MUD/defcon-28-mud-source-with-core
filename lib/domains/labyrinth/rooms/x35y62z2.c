inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 2 }));
  set_short( "Hallway - x35y62z2" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y62z2.c",
  "east" : DIR+"/rooms/x36y62z2.c",
  "south" : DIR+"/rooms/x35y61z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
