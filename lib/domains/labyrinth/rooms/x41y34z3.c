inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 34, 3 }));
  set_short( "Corridor - x41y34z3" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y34z3.c",
  "east" : DIR+"/rooms/x42y34z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
