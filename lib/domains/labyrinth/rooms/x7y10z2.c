inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 10, 2 }));
  set_short( "Passage - x7y10z2" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y10z2.c",
  "south" : DIR+"/rooms/x7y9z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
