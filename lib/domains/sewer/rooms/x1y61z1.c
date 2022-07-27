inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 1 }));
  set_short( "Corridor - x1y61z1" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z1.c",
  "south" : DIR+"/rooms/x1y60z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
