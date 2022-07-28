inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 48, 3 }));
  set_short( "Passage - x13y48z3" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y48z3.c",
  "south" : DIR+"/rooms/x13y47z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
