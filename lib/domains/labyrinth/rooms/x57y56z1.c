inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 56, 1 }));
  set_short( "Passage - x57y56z1" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y56z1.c",
  "south" : DIR+"/rooms/x57y55z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
