inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 15, 9 }));
  set_short( "Corridor - x1y15z9" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y16z9.c",
  "south" : DIR+"/rooms/x1y14z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
