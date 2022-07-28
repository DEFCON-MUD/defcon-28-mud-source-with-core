inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 18, 3 }));
  set_short( "Passage - x54y18z3" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y18z3.c",
  "east" : DIR+"/rooms/x55y18z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
