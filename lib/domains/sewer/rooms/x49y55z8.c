inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 55, 8 }));
  set_short( "Hallway - x49y55z8" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y56z8.c",
  "south" : DIR+"/rooms/x49y54z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
