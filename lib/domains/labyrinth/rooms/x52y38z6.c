inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 38, 6 }));
  set_short( "Passage - x52y38z6" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y38z6.c",
  "east" : DIR+"/rooms/x53y38z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
