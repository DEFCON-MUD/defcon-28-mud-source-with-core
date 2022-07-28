inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 60, 6 }));
  set_short( "Corridor - x7y60z6" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y60z6.c",
  "north" : DIR+"/rooms/x7y61z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
