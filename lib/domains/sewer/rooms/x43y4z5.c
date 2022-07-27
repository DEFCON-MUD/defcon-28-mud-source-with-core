inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 4, 5 }));
  set_short( "Corridor - x43y4z5" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "south" : DIR+"/rooms/x43y3z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
