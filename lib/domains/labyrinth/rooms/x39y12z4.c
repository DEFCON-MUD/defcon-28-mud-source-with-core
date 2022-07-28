inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 4 }));
  set_short( "Passage - x39y12z4" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y12z4.c",
  "east" : DIR+"/rooms/x40y12z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
