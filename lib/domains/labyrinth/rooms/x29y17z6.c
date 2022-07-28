inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 17, 6 }));
  set_short( "Passage - x29y17z6" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y18z6.c",
  "south" : DIR+"/rooms/x29y16z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
