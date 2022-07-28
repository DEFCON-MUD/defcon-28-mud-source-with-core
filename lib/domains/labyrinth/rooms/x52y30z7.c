inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 30, 7 }));
  set_short( "Passage - x52y30z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y30z7.c",
  "east" : DIR+"/rooms/x53y30z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
