inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 52, 8 }));
  set_short( "Hallway - x23y52z8" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y52z8.c",
  "north" : DIR+"/rooms/x23y53z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
