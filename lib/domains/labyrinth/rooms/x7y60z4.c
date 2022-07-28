inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 60, 4 }));
  set_short( "Passage - x7y60z4" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y60z4.c",
  "south" : DIR+"/rooms/x7y59z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
