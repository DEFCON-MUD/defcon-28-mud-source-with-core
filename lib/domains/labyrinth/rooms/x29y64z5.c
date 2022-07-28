inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 64, 5 }));
  set_short( "Passage - x29y64z5" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y64z5.c",
  "east" : DIR+"/rooms/x30y64z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
