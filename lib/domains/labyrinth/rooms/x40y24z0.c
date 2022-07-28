inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 24, 0 }));
  set_short( "Corridor - x40y24z0" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y24z0.c",
  "east" : DIR+"/rooms/x41y24z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
