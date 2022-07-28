inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 4 }));
  set_short( "Corridor - x27y14z4" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y14z4.c",
  "south" : DIR+"/rooms/x27y13z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
