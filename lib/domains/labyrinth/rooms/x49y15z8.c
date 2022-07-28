inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 15, 8 }));
  set_short( "Passage - x49y15z8" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y16z8.c",
  "south" : DIR+"/rooms/x49y14z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
