inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 15, 1 }));
  set_short( "Hallway - x49y15z1" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y16z1.c",
  "south" : DIR+"/rooms/x49y14z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
