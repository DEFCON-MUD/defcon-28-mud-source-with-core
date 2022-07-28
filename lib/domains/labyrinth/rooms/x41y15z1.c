inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 15, 1 }));
  set_short( "Hallway - x41y15z1" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y16z1.c",
  "south" : DIR+"/rooms/x41y14z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
