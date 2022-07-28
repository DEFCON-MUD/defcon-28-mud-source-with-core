inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 0 }));
  set_short( "Hallway - x53y42z0" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y42z0.c",
  "north" : DIR+"/rooms/x53y43z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
