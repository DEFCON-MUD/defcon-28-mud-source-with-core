inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 8 }));
  set_short( "Hallway - x57y62z8" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y62z8.c",
  "south" : DIR+"/rooms/x57y61z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
