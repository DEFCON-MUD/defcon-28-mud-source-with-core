inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 15, 1 }));
  set_short( "Hallway - x5y15z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y16z1.c",
  "south" : DIR+"/rooms/x5y14z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
