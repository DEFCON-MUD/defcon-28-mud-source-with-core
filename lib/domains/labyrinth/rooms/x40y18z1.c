inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 18, 1 }));
  set_short( "Passage - x40y18z1" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y18z1.c",
  "east" : DIR+"/rooms/x41y18z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
