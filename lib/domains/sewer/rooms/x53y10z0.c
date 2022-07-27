inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 10, 0 }));
  set_short( "Corridor - x53y10z0" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y11z0.c",
  "south" : DIR+"/rooms/x53y9z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
