inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 30, 9 }));
  set_short( "Passage - x16y30z9" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y30z9.c",
  "east" : DIR+"/rooms/x17y30z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
