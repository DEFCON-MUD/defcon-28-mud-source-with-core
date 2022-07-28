inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 3, 5 }));
  set_short( "Passage - x61y3z5" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y4z5.c",
  "south" : DIR+"/rooms/x61y2z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
