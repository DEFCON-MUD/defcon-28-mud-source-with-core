inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 48, 0 }));
  set_short( "Hallway - x20y48z0" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y48z0.c",
  "east" : DIR+"/rooms/x21y48z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
