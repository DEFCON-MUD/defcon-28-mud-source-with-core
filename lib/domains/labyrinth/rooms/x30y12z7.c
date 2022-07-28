inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 12, 7 }));
  set_short( "Hallway - x30y12z7" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y12z7.c",
  "east" : DIR+"/rooms/x31y12z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
