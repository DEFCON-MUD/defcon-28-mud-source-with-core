inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 15, 6 }));
  set_short( "Hallway - x33y15z6" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y16z6.c",
  "south" : DIR+"/rooms/x33y14z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
