inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 4, 7 }));
  set_short( "Hallway - x56y4z7" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y4z7.c",
  "east" : DIR+"/rooms/x57y4z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
