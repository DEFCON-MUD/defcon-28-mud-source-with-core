inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 30, 2 }));
  set_short( "Passage - x28y30z2" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y30z2.c",
  "east" : DIR+"/rooms/x29y30z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
