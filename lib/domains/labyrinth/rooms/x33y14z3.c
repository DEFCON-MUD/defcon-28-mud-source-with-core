inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 14, 3 }));
  set_short( "Corridor - x33y14z3" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y15z3.c",
  "south" : DIR+"/rooms/x33y13z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
