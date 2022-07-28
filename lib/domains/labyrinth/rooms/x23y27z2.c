inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 27, 2 }));
  set_short( "Hallway - x23y27z2" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y28z2.c",
  "south" : DIR+"/rooms/x23y26z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
