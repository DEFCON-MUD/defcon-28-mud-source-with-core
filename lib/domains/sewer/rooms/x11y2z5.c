inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 2, 5 }));
  set_short( "Hallway - x11y2z5" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y2z5.c",
  "north" : DIR+"/rooms/x11y3z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
