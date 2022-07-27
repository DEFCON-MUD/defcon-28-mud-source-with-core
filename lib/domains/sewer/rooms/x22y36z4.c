inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 36, 4 }));
  set_short( "Hallway - x22y36z4" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y36z4.c",
  "east" : DIR+"/rooms/x23y36z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
