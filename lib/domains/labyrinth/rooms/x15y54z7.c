inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 54, 7 }));
  set_short( "Corridor - x15y54z7" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y54z7.c",
  "north" : DIR+"/rooms/x15y55z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
