inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 18, 7 }));
  set_short( "Corridor - x30y18z7" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y18z7.c",
  "east" : DIR+"/rooms/x31y18z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
