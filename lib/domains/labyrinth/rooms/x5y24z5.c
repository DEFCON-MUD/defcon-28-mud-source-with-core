inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 24, 5 }));
  set_short( "Corridor - x5y24z5" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y24z5.c",
  "east" : DIR+"/rooms/x6y24z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
