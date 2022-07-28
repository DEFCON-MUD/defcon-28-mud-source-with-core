inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 24, 7 }));
  set_short( "Hallway - x55y24z7" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y24z7.c",
  "south" : DIR+"/rooms/x55y23z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
