inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 24, 5 }));
  set_short( "Hallway - x4y24z5" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y24z5.c",
  "east" : DIR+"/rooms/x5y24z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
