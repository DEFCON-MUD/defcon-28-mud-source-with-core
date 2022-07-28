inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 42, 9 }));
  set_short( "Hallway - x27y42z9" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y42z9.c",
  "east" : DIR+"/rooms/x28y42z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
